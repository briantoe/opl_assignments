#lang racket
; problem 8
(define (EXP-DEPTH ls)
  (if (not (list? ls)) 0
      (if (null? ls) 1
          (if (list? (car ls)) (+ 1 (max (EXP-DEPTH (car ls)) (EXP-DEPTH (cdr ls))))
              (EXP-DEPTH (cdr ls))
              )
          )
      )
  )