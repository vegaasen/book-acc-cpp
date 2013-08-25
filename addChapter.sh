#!/bin/bash

echo "Creating folders for a new chapter.";

FOLDER=chapter$1

mkdir $FOLDER;
cd $FOLDER;
mkdir out

echo "Done. Created folder \"$FOLDER\"";
