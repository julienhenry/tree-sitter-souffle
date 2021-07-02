#!/bin/bash

sudo dockerd -s overlay2
node_modules/.bin/tree-sitter build-wasm