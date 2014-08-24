#define BUILDING_NODE_EXTENSION
#include <node.h>
#include "BinarySearchTree.h"

using namespace v8;

void InitAll(Handle<Object> target) {
	BinarySearchTree::Init(target);
}

NODE_MODULE(BinarySearchTree, InitAll);