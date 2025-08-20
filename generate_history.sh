#!/bin/bash

OUTPUT="HISTORY.md"
echo "# Repository Commit History" > $OUTPUT
echo "" >> $OUTPUT

# Loop through top-level folders
for folder in $(ls -d */ | cut -f1 -d'/'); do
    echo "## Folder: $folder" >> $OUTPUT
    echo "" >> $OUTPUT
    git log --pretty=format:"- %h %ad %an: %s" --date=short -- $folder >> $OUTPUT
    echo "" >> $OUTPUT
done

echo "✅ Commit history saved to $OUTPUT"
