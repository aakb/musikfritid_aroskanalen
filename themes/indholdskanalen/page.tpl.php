<div id="container">
  <?php if ($logo): ?>
    <div id="logo-container">
      <a href="/"><img src="<?php print $logo ?>" alt="<?php print t('Logo'); ?>" title="<?php print t('Logo'); ?>" id="logo" /></a>
    </div>
  <?php endif; ?>
  <div id="branding" class="clearfix">
    <?php print $breadcrumb; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h1 class="page-title"><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($primary_local_tasks); ?>
  </div>

  <div id="page">

    <?php if ($secondary_local_tasks): ?>
      <div class="tabs-secondary clearfix"><ul class="tabs secondary"><?php print render($secondary_local_tasks); ?></ul></div>
    <?php endif; ?>

    <?php if ($page['sidebar_first']): ?>
      <div id="pageinner">
    <?php endif; ?>

    

    <div id="content" class="clearfix">
      <div class="element-invisible"><a id="main-content"></a></div>
      <?php if ($messages): ?>
        <div id="console" class="clearfix"><?php print $messages; ?></div>
      <?php endif; ?>
      <?php if ($page['help']): ?>
        <div id="help">
          <?php print render($page['help']); ?>
        </div>
      <?php endif; ?>
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      <?php print render($page['content']); ?>
    </div>

    <?php if ($page['sidebar_first']): ?>
      </div>
    <?php endif; ?>

    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="sidebar">
        <?php print render($page['sidebar_first']); ?>
      </div>
    <?php endif; ?>

  </div>
</div>

<div id="footer" class="clearfix">
  <?php print render($page['footer']); ?>
  <?php print $feed_icons; ?>
</div>