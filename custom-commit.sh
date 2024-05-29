#!/bin/bash

git branch -D temp;
git checkout -b temp;
git add .;
git commit -m "$1";
git branch -D master;
git checkout -b master;
git branch -D temp;
git push origin master -f;