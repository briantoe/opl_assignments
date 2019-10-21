#lang racket

; problem 6
(define (sum-odd-squares ls)
  (cond 
        ((null? ls) 0)
        ((odd? (car ls)) (+ (* (car ls) (car ls)) (sum-odd-squares (cdr ls))))
        ((even? (car ls)) (+ 0 (sum-odd-squares (cdr ls))))
        
        )
)