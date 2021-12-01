name: Cppcheck

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
    - name: get_cppcheck
      run: sudo apt-get install cppcheck
    - name: Code Quality
      run: make analysis
