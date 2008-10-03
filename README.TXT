// $Id$

r4032login
--------------------------------------------------------------------------------
Redirect the HTTP 403 error page to the Drupal /user/login page with a message
that reads, "Access denied! You must login to view this page." Also, a redirect
to the desired page is appended in the url query string so that, once login is
successful, the user is taken directly where they were originally trying to go.

Makes for a much more user-friendly Drupal.

Installation
--------------------------------------------------------------------------------

1. Extract and enable the r4032login.module
2. Navigate to /admin/settings/error-reporting
3. In the "Default 403 (access denied) page" field, type: r4032login
4. Click the "Save configuration" button

Support
--------------------------------------------------------------------------------
This open source project is supported by the Drupal.org community. To report a
bug, request a feature, or upgrade to the latest version, please visit the
project page:

  http://drupal.org/project/r4032login