#!/bin/bash

# Find all files larger than 100MB and track them with Git LFS
find . -type f -size +100M | while read FILE; do
  git lfs track "$FILE"
  git add "$FILE"
done

# Add .gitattributes to the staging area
git add .gitattributes

echo "All files larger than 100MB have been added to Git LFS and staged for commit."