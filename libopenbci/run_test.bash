#!/bin/bash

#run virtual socket
socat -d -d pty,raw,echo=0 pty,raw,echo=0 & 

