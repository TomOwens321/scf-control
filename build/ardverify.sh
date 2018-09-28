#!/usr/bin/env bash

ARDCMD=/opt/arduino/arduino

BTEST=blink/blink.ino

echo "Starting verify test cycle."
${ARDCMD} --verify ${BTEST}
