;;;contents of .dir-locals.el
((nil . (
         (eval . (progn
                   (defun my-project-specific-function ()
                     (setq ac-clang-flags (append ac-clang-flags '("-I../messages")))
                     (setq achead:include-directories (append achead:include-directories '("../messages")))
                     )
                   (my-project-specific-function)
                   )
               )
         )
      ))
