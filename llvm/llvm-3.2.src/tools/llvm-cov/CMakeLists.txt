set(LLVM_LINK_COMPONENTS instrumentation instrumenter )

add_llvm_tool(llvm-cov
  llvm-cov.cpp
  )
