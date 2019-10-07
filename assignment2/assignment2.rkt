#lang racket

; problem 4
(define (last-element ls)
  (cond ((null? (cdr ls))
         (car ls))
  (else (last-element (cdr ls)))))

; problem 5
(define (deep-reverse ls)
  (if (list? ls)
      (reverse (map deep-reverse ls))
      ls))
; problem 6
(define (sum-odd-squares ls)
  (cond 
        ((null? ls) 0)
        ((odd? (car ls)) (+ (* (car ls) (car ls)) (sum-odd-squares (cdr ls))))
        ((even? (car ls)) (+ 0 (sum-odd-squares (cdr ls))))
        
        ))

; problem 7
;(define (subsets ls)
;  (if (null? s)
;     (list nil)
;     (

; problem 10
(define (fib n)
  (if (= n 1)
    0
    (if (= n 2)
        1
    (+ (fib (- n 1)) (fib (- n 2))))))

(define (fib-square n)
  (* (fib n) (fib n)))

(define (fib-squares n)
  (if (= n 0)
      (cons empty (fib n))
      (cons (fib n) (fib-squares (- n 1)) )))