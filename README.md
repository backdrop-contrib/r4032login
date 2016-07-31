
Redirect 403 to User Login
==========================

Redirect the HTTP 403 error page to the Backdrop /user/login page.

The login page will show a message that reads, "Access denied. You must login to view this page." A redirect to the desired page is appended in the URL query string so that, once login is successful, the user is taken directly where they were originally trying to go.

Makes for a much more user-friendly Backdrop.

Installation
------------

Extract and enable r4032login.

Configuration settings are appended to the site information administration form.

Status Codes
------------

* 200 OK
* 301 Moved Permanently
* 302 Found
* 307 Temporary Redirect
* 403 Forbidden
* 451 Unavailable For Legal Reasons

Current Maintainer
------------------

- David Norman (https://github.com/deekayen)

Credits
-------

- Originally written for Drupal by Mike Smullin (https://github.com/mikesmullin)
- Ported to Backdrop by David Norman (https://github.com/deekayen)

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
