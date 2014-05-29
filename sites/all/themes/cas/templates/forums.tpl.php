<?php

/**
 * @file
 * Displays a forum.
 *
 * May contain forum containers as well as forum topics.
 *
 * Available variables:
 * - $forums: The forums to display (as processed by forum-list.tpl.php).
 * - $topics: The topics to display (as processed by forum-topic-list.tpl.php).
 * - $forums_defined: A flag to indicate that the forums are configured.
 *
 * @see template_preprocess_forums()
 *
 * @ingroup themeable
 */
 global $user;
?>
<p>To edit your forum notification settings, please <?php print l('click here', 'user/'.$user->uid.'/notify'); ?>.</p>
<?php if ($forums_defined): ?>
<div id="forum">
  <?php print $forums; ?>
  <?php print $topics; ?>
</div>
<?php endif; ?>
