#!/bin/bash

PKG=BsReactNative

OUTPUT=./build/odoc-html
LIB=../bs-react-native-next/lib/bs/src
PUBLIC=./public
ODOC=$(which odoc)
if [[ $? != 0 ]] ; then
  echo "Missing odoc, please look at the CONTRIBUTING.md guide"
  exit 1
fi

mkdir -p ${OUTPUT}

# Gather the sources to compile .odoc files
CMT_FILES=$(find ${LIB} -name "*.cmti")

echo "<< Compiling module docs..."
for file in ${CMT_FILES}; do
  ${ODOC} compile \
    -I ${LIB} \
    --pkg=${PKG} \
    --resolve-fwd-refs \
    ${file} \
  || exit 1
done

# Now we can look for the compiled .odoc files
ODOC_FILES=$(find ${LIB} -name "*.odoc")

echo "<< Generating HTML..."
for file in ${ODOC_FILES}; do
  ${ODOC} html \
    -I ${LIB} \
    -o ${OUTPUT} \
    --syntax=re \
    --semantic-uris \
    ${file} \
  || exit 1
done