#lang scheme

; problem 4
(define (last-element ls)
  (cond ((null? (cdr ls)) (car ls))
  (else (last-element (cdr ls)))))

; problem 5
(define (deep-reverse ls)
  (if (list? ls)
      (reverse (map deep-reverse ls))
      
      ls
      )
  )

; problem 6
(define (sum-odd-squares ls)
  (cond 
        ((null? ls) 0)
        ((odd? (car ls)) (+ (* (car ls) (car ls)) (sum-odd-squares (cdr ls))))
        ((even? (car ls)) (+ 0 (sum-odd-squares (cdr ls))))
        
        )
)

; problem 7
 (define (subsets ls)
     (combinations ls))

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

; problem 9
(define (enum-interval x y)
  (if (equal? x y) '()
      (if (even? x) (append (list x) (enum-interval (+ x 1) y))
          (enum-interval (+ x 1) y)
          )
      )
  )


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
  (if (equal? n 0) (list 0)
      (append (fib-squares (- n 1)) (list(fib-square ( + 1 n))) )            
      )
  )
      
      