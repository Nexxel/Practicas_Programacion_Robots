; Auto-generated. Do not edit!


(cl:in-package rosR_demos-msg)


;//! \htmlinclude Linearization.msg.html

(cl:defclass <Linearization> (roslisp-msg-protocol:ros-message)
  ((dist
    :reader dist
    :initarg :dist
    :type cl:float
    :initform 0.0)
   (volt
    :reader volt
    :initarg :volt
    :type cl:float
    :initform 0.0))
)

(cl:defclass Linearization (<Linearization>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Linearization>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Linearization)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rosR_demos-msg:<Linearization> is deprecated: use rosR_demos-msg:Linearization instead.")))

(cl:ensure-generic-function 'dist-val :lambda-list '(m))
(cl:defmethod dist-val ((m <Linearization>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rosR_demos-msg:dist-val is deprecated.  Use rosR_demos-msg:dist instead.")
  (dist m))

(cl:ensure-generic-function 'volt-val :lambda-list '(m))
(cl:defmethod volt-val ((m <Linearization>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rosR_demos-msg:volt-val is deprecated.  Use rosR_demos-msg:volt instead.")
  (volt m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Linearization>) ostream)
  "Serializes a message object of type '<Linearization>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'dist))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'volt))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Linearization>) istream)
  "Deserializes a message object of type '<Linearization>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'dist) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'volt) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Linearization>)))
  "Returns string type for a message object of type '<Linearization>"
  "rosR_demos/Linearization")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Linearization)))
  "Returns string type for a message object of type 'Linearization"
  "rosR_demos/Linearization")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Linearization>)))
  "Returns md5sum for a message object of type '<Linearization>"
  "3f7dd391cdbb9d1f72822c152e8c430f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Linearization)))
  "Returns md5sum for a message object of type 'Linearization"
  "3f7dd391cdbb9d1f72822c152e8c430f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Linearization>)))
  "Returns full string definition for message of type '<Linearization>"
  (cl:format cl:nil "float32 dist~%float32 volt~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Linearization)))
  "Returns full string definition for message of type 'Linearization"
  (cl:format cl:nil "float32 dist~%float32 volt~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Linearization>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Linearization>))
  "Converts a ROS message object to a list"
  (cl:list 'Linearization
    (cl:cons ':dist (dist msg))
    (cl:cons ':volt (volt msg))
))
