#lang racket
; problem 9
(define (enum-interval x y)
  (if (equal? x y) '()
      (if (even? x) (append (list x) (enum-interval (+ x 1) y))
          (enum-interval (+ x 1) y)
          )
      )
  )