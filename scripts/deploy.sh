#!/bin/sh
git pull origin master
cd ../docroot
drush updb -y
drush fra -y
drush cc all
