#!/bin/bash
ifconfig -a | grep -oe "ether .*" | cut -d " " -f2