FILE(REMOVE_RECURSE
  "CMakeFiles/deploy"
  "deploy_stamp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/deploy.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
