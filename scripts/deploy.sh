#!/bin/sh
git pull origin master
cd ../docroot
drush updb
drush fra -y
drush cc all
