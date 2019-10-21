#lang racket
; problem 5
(define (deep-reverse ls)
  (if (list? ls)
      (reverse (map deep-reverse ls))
      
      ls
      )
  )