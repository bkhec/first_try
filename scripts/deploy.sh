#!/bin/sh
git pull origin master
cd ../docroot
drush updb
drush fra -y
drush updb -y
drush cc all
