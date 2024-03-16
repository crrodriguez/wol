project('wol', 'c',
  version : '0.1.7',
  default_options : ['warning_level=3'])

add_project_arguments(['-DPACKAGE="@0@"'.format(meson.project_name()),], language: 'c')
add_project_arguments(['-DVERSION="@0@"'.format(meson.project_version()),], language: 'c')
add_project_arguments('-DGETTEXT_PACKAGE="wol"', language:'c')
add_project_arguments('-D_GNU_SOURCE', language:'c')

subdir('src')
subdir('po')
