<?php
/**
 * @file
 * slcas.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function slcas_default_rules_configuration() {
  $items = array();
  $items['rules_new_forum_topic_comment_email_topic_author'] = entity_import('rules_config', '{ "rules_new_forum_topic_comment_email_topic_author" : {
      "LABEL" : "new forum topic comment, email topic author",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_forum" : { "bundle" : "comment_node_forum" } },
      "DO" : [
        { "mail" : {
            "to" : "[comment:node:author:mail]",
            "subject" : "[site:name] :: new comment on [comment:node:title]",
            "message" : "Hi [comment:node:author:name],\\r\\n\\r\\n[comment:name] has commented on: \\u0022[comment:node:title]\\u0022\\r\\n\\r\\n----\\r\\n[comment:body]\\r\\n----\\r\\n\\r\\nYou can view the comment at the following url\\r\\n[comment:url:absolute]\\r\\n\\r\\n-- Sarnia-Lambton Children\\u0027s Aid Society\\r\\n[site:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
