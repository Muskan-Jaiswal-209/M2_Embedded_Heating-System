name: Compile-Linux

on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2
    - name: get_avr-gcc
      run: sudo apt-get install gcc-avr binutils-avr avr-libc
    - name: Compile
      run: make
