; Drush Make file
core = 7.x
api = 2

; Defaults.
defaults[projects][subdir] = "contrib"

projects[backup_migrate][version] = 3.1

projects[link][version] = 1.3

projects[linkit][version] = 3.4

projects[media][version] = 2.0-beta1

projects[views][version] = 3.11

;projects[wysiwyg][version] = 2.2
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][revision] = "37dc07db900cac540f30bca5d90bb75951cc314f"

projects[zen][version] = 5.5

; Libraries

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.5/ckeditor_4.4.5_full.zip
libraries[ckeditor][destination] = libraries
