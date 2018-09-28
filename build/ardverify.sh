#!/usr/bin/env bash

ARDCMD=/opt/arduino/arduino

for INO in $(find . -iname "*.ino"); do
    echo "Starting verify test cycle for ${INO}."
    ${ARDCMD} --verify ${INO}
done
