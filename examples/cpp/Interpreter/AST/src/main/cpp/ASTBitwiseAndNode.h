/* Generated By:JJTree: Do not edit this line. ASTBitwiseAndNode.h Version 8.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#pragma once

#include "SimpleNode.h"


class ASTBitwiseAndNode : public SimpleNode {
public: 
  ASTBitwiseAndNode(int id);
  virtual ~ASTBitwiseAndNode();
  virtual void interpret();
};

/* JavaCC - OriginalChecksum=2e6886663f4bee1f817400bf3de8679c (do not edit this line) */