.include "/home/ankit/m328Pdef.inc"

ldi r16,0b00111100
out DDRD,r16      ; declaring pin as output
 
ldi r16,0b00000001    ;intializing X
ldi r17,0b00000001    ;intializing Y   
ldi r18,0b00000001   ;intializing Z
ldi r19,0b00000001
 
 
;X'
eor r0,r0
eor r0,r16  ;x
;eor r0,r19 ;!x


;and r0,r18       ;X'Z value

;or r0,r17

;
 
lsl r0
lsl r0
ldi r17,0b000011100

mov r16,r0 
out PortD,r17

start:
rjmp start 
