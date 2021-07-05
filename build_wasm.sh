#!/bin/bash

node_modules/.bin/tree-sitter generate
sudo dockerd -s overlay2 &
node_modules/.bin/tree-sitter build-wasm
