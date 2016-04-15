<?php print $doctype; ?>
<html style="height:100%" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--  [if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
  <!--  <script >/* html5shiv */ (function(){var t='abbr article aside audio bdi canvas data datalist details figcaption figure footer header hgroup mark meter nav output progress section summary time video'.split(' ');for(var i=t.length;i--;)document.createElement(t[i])})();</script>-->
</head>
<body<?php print $attributes;?> style="height:100%">
<!--[if lt IE 9]><div class="iecomp"><![endif]-->
<div style="height:100%;overflow:hidden"><iframe src="<?php print $field_shiny_url; ?>" width="100%" height="100%"></iframe></div>
<?php print $page_bottom; ?>
<!--[if lt IE 9]></div><![endif]-->
</body>
</html>