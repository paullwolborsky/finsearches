<input type="hidden" name="sid" value="<?php print arg(2); ?>"/>
<div id="dexp_layerslider">
    <ul class="level1">
        <li class="settings" style="float:right"><a href="#globalsettings">Global settings</a></li>
        <li class="design"  style="float:right"><a href="#slidesdesign">Slides design</a></li>
    </ul>
    <div id="globalsettings">
        <?php include 'globalsettings.php'; ?>
    </div>
    <div id="slidesdesign">
        <ul id="slideslist" class="ui-tabs-nav ui-helper-reset ui-helper-clearfix ">
        </ul>
        <a href="#" id="addslide">Add Slide</a>
        <div class="clearfix"></div>
        <div id="dexp_layerslider_main">
            <table>
                <tbody>
                    <tr>
                        <th colspan="4">Slide options</th>
                    </tr>
                    <tr>
                        <td width="25%">
                            <label>Background image</label>
                            <input name="background_image" id="background-image" data-uri="[name=background_image_uri]" class="file-imce form-text slide-option" onchange="setSlideSackground(this.value)"/>
                            <input type="hidden" name="background_image_uri" class="slide-option"/>
                            <a href="#" onclick="javascript:{jQuery('[name=background_image],[name=background_image_uri]').val('');return false;}">Clear</a>
                        </td>
                        <td width="25%">
                            <label>Slide transition</label>
                            <?php print dexp_layerslider_select('data_transition', $datatransition, 'slide-option'); ?>
                        </td>
                        <td width="25%">
                            <label>Slide slotamount</label>
                            <input type="text" name="data_slotamount" class="form-text slide-option">
                        </td>
                        <td width="25%">
                            <label>Slide masterspeed</label>
                            <input type="text" name="data_masterspeed" class="form-text slide-option">
                        </td>
                    </tr>
                    
                    <tr>
                        <td width="25%">
                            <label>Slide link</label>
                            <input type="text" name="slide_link" class="form-text slide-option">
                        </td>
                        <td width="25%"><label>Link target</label> <?php print dexp_layerslider_select('link_target', $linktaget, 'slide-option'); ?></td>
                        <td width="25%">
                            <label>Delay</label>
                            <input type="text" class="form-text slide-option" name="data_delay">
                        </td>
                        <td  width="25%">
                            <label>Thumbnail</label>
                            <input type="text" class="form-text file-imce slide-option" id="data-thumb" name="data_thumb">
                        </td>
                    </tr>
                    <tr>
                        <th colspan="4">
                            Ken Burns Animation
                        </th>
                    </tr>
                    <tr>
                        <td>
                            <label>Ken Burns</label>
                            <select name="data_kenburns" class="form-select slide-option">
                                <option value="off">No</option>
                                <option value="on">Yes</option>
                            </select>
                        </td>
                        <td>
                            <label>Background Start Position</label>
                            <select name="data_bgposition" class="form-select slide-option">
                                <option value="center center">center center</option>
                                <option value="center top">center top</option>
                                <option value="center bottom">center bottom</option>
                                <option value="left center">left center</option>
                                <option value="left top">left top</option>
                                <option value="left bottom">left bottom</option>
                                <option value="right center">right center</option>
                                <option value="right top">right top</option>
                                <option value="right bottom">right bottom</option>
                            </select>
                        </td>
                        <td>
                            <label>Background End Position</label>
                            <select name="data_bgpositionend" class="form-select slide-option">
                                <option value="center center">center center</option>
                                <option value="center top">center top</option>
                                <option value="center bottom">center bottom</option>
                                <option value="left center">left center</option>
                                <option value="left top">left top</option>
                                <option value="left bottom">left bottom</option>
                                <option value="right center">right center</option>
                                <option value="right top">right top</option>
                                <option value="right bottom">right bottom</option>
                            </select>
                        </td>
                        <td width="25%">
                            <label>Ken Burns Duration</label>
                            <input type="text" name="data_duration" class="form-text slide-option">
                        </td>
                    </tr>
                </tbody>
            </table>
            <div>
                <?php include 'slide.design.php'; ?>
            </div>
        </div>
    </div>
</div>
<div>
    <input type="button" id="save" class="form-submit" value="Save"/>
    <input type="button" id="save2" class="form-submit" value="Save & Continue"/>
</div>
<?php global $base_url; ?>
<script type="text/javascript">
    var filehandle = null;
    jQuery(document).ready(function ($) {
        $('#dexp_layerslider').tabs({
            selected: 1,
            active: 1,
            select: function (event, ui) {
                $('#slidedesign, #preview').width($settings.startwidth).height($settings.startheight);
                if ($('#slidedesign').width() > $('#dexp_layerslider').width()) {
                    var $scale = $('#dexp_layerslider').width() / $('#slidedesign').width();
                }
            },
            activate: function (event, ui) {
                $('#slidedesign, #preview').width($settings.startwidth).height($settings.startheight);
                if ($('#slidedesign').width() > $('#dexp_layerslider').width()) {
                    var $scale = $('#dexp_layerslider').width() / $('#slidedesign').width();
                }
            }
        });
        $('.file-imce').click(function () {
            filehandle = $(this);
            Drupal.media.popups.mediaBrowser(function (files) {
                var image = files[0];
                filehandle.val(image.url).trigger('onchange');
                $(filehandle.data('uri')).val(image.uri);
            });
        })
    })
    function send(fid) {
        alert(fid);
    }
    function dexp_layerslider_fileselect(file, win) {
        filehandle.val(file.url);//insert file url into the url field
        filehandle.trigger('onchange');
        win.close();//close IMCE
    }
    function insertImageToLayer(url) {
        var layerid = $currentSlide + '-' + $currentLayer;
        var img = jQuery('<img>').attr('src', url);
        jQuery('#' + layerid).find('.inner').html(img);
        var image = new Image();
        image.onload = function () {
            jQuery('#' + layerid).width(this.width);
            jQuery('#' + layerid).height(this.height);
            jQuery('input[name=width]').val(this.width);
            jQuery('input[name=height]').val(this.height);
        }
        image.src = url;
    }
    function setSlideSackground(url) {
        jQuery('#slidedesign').css({
            backgroundImage: 'url(' + url + ')'
        });
    }
</script>
