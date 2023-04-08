#!/bin/bash
ar rcs liball.a
ar -rc liball.a *.o
ranlib liball.a
