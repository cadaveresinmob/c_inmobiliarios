<?php
/**
 * @file
 * ft_c_inmobiliarios_blog_post.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ft_c_inmobiliarios_blog_post_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blog_post content'.
  $permissions['create blog_post content'] = array(
  'name' => 'create blog_post content',
  'roles' => array(),
  'module' => 'node',
  );

  // Exported permission: 'delete any blog_post content'.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog_post content'.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in blog_category'.
  $permissions['delete terms in blog_category'] = array(
    'name' => 'delete terms in blog_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any blog_post content'.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog_post content'.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in blog_category'.
  $permissions['edit terms in blog_category'] = array(
    'name' => 'edit terms in blog_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}