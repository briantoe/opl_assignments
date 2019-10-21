#lang racket

; problem 4
(define (last-element ls)
  (cond ((null? (cdr ls)) (car ls))
  (else (last-element (cdr ls)))))
