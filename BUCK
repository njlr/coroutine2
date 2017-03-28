include_defs('//BUCKAROO_DEPS')

prebuilt_cxx_library(
  name = 'coroutine2',
  header_only = True,
  header_namespace = 'boost/coroutine2',
  exported_headers = subdir_glob([
    ('include/boost/coroutine2', '**/*.hpp'),
    ('include/boost/coroutine2', '**/*.ipp'),
  ]),
  visibility = [
    'PUBLIC',
  ],
  deps = BUCKAROO_DEPS,
)
