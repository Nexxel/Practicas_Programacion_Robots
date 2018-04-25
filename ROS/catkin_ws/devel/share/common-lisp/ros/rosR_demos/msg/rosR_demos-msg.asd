
(cl:in-package :asdf)

(defsystem "rosR_demos-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Linearization" :depends-on ("_package_Linearization"))
    (:file "_package_Linearization" :depends-on ("_package"))
  ))