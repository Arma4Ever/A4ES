c l a s s   C f g P a t c h e s  
 {  
 	 c l a s s   a 3 c _ c _ r h s u s f _ c _ h m m w v  
 	 {  
 	 	 u n i t s [ ]   =   { } ;  
 	 	 w e a p o n s [ ]   =   { } ;  
 	 	 r e q u i r e d V e r s i o n   =   1 . 0 ;  
 	 	 r e q u i r e d A d d o n s [ ]   =   { " r h s u s f _ c _ h m m w v " } ;  
 	 } ;  
 } ;  
 c l a s s   D e f a u l t E v e n t h a n d l e r s ;  
 c l a s s   W e a p o n F i r e G u n ;  
 c l a s s   W e a p o n C l o u d s G u n ;  
 c l a s s   W e a p o n F i r e M G u n ;  
 c l a s s   W e a p o n C l o u d s M G u n ;  
 c l a s s   C f g V e h i c l e s  
 {  
 	 c l a s s   L a n d V e h i c l e ;  
 	 c l a s s   C a r :   L a n d V e h i c l e  
 	 {  
 	 	 c l a s s   N e w T u r r e t ;  
 	 } ;  
 	 c l a s s   C a r _ F :   C a r  
 	 {  
 	 	 c l a s s   A n i m a t i o n S o u r c e s ;  
 	 	 c l a s s   T u r r e t s  
 	 	 {  
 	 	 	 c l a s s   M a i n T u r r e t :   N e w T u r r e t  
 	 	 	 {  
 	 	 	 	 d i s a b l e S o u n d A t t e n u a t i o n   =   1 ;  
 	 	 	 	 c l a s s   V i e w O p t i c s ;  
 	 	 	 } ;  
 	 	 } ;  
 	 	 c l a s s   H i t P o i n t s  
 	 	 {  
 	 	 	 c l a s s   H i t L F W h e e l ;  
 	 	 	 c l a s s   H i t L F 2 W h e e l ;  
 	 	 	 c l a s s   H i t R F W h e e l ;  
 	 	 	 c l a s s   H i t R F 2 W h e e l ;  
 	 	 	 c l a s s   H i t G l a s s 1 ;  
 	 	 	 c l a s s   H i t G l a s s 2 ;  
 	 	 	 c l a s s   H i t G l a s s 3 ;  
 	 	 	 c l a s s   H i t G l a s s 4 ;  
 	 	 	 c l a s s   H i t G l a s s 5 ;  
 	 	 	 c l a s s   H i t G l a s s 6 ;  
 	 	 } ;  
 	 } ;  
 	 c l a s s   M R A P _ 0 1 _ b a s e _ F :   C a r _ F  
 	 {  
 	 	 c l a s s   S o u n d s ;  
 	 	 c l a s s   E v e n t H a n d l e r s ;  
 	 } ;  
 	 c l a s s   r h s u s f _ h m m w e _ b a s e :   M R A P _ 0 1 _ b a s e _ F  
 	 {  
 	 	 c l a s s   E v e n t H a n d l e r s :   E v e n t H a n d l e r s  
 	 	 {  
 	 	 	 h i t p a r t   =   " _ t h i s   c a l l   S L X _ X E H _ E H _ H i t P a r t ; _ t h i s   c a l l   r h s _ f n c _ h i t H a n d l e r " ;  
 	 	 } ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ 2 d r :   r h s u s f _ h m m w e _ b a s e  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " r h s _ v e h c l a s s _ c a r " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 a u t h o r   =   " $ S T R _ R H S U S F _ A U T H O R _ F U L L " ;  
 	 	 s c o p e   =   1 ;  
 	 	 c l a s s   U s e r A c t i o n s  
 	 	 {  
 	 	 	 c l a s s   l i g h t _ b o _ o f f  
 	 	 	 {  
 	 	 	 	 d i s p l a y N a m e   =   " B . O .   L i g h t   o f f " ;  
 	 	 	 	 p o s i t i o n   =   " p o s _ d r i v e r p o s " ;  
 	 	 	 	 r a d i u s   =   2 ;  
 	 	 	 	 o n l y F o r p l a y e r   =   0 ;  
 	 	 	 	 c o n d i t i o n   =   " ( p l a y e r   = =   d r i v e r   t h i s )   & &   t h i s   a n i m a t i o n P h a s e   ' l i g h t _ b o ' < 0 . 5 ; " ;  
 	 	 	 	 s t a t e m e n t   =   " t h i s   a n i m a t e   [ ' l i g h t _ b o ' ,   1 ] ; t h i s   a n i m a t e   [ ' l i g h t _ b r a k e _ b o ' ,   1 ] " ;  
 	 	 	 } ;  
 	 	 	 c l a s s   l i g h t _ b o _ o n :   l i g h t _ b o _ o f f  
 	 	 	 {  
 	 	 	 	 d i s p l a y N a m e   =   " B . O .   L i g h t   o n " ;  
 	 	 	 	 c o n d i t i o n   =   " ( p l a y e r   = =   d r i v e r   t h i s )   & &   t h i s   a n i m a t i o n P h a s e   ' l i g h t _ b o ' = = 1 ; " ;  
 	 	 	 	 s t a t e m e n t   =   " t h i s   a n i m a t e   [ ' l i g h t _ b o ' ,   0 ] ; t h i s   a n i m a t e   [ ' l i g h t _ b r a k e _ b o ' ,   0 ] " ;  
 	 	 	 } ;  
 	 	 	 c l a s s   l i g h t _ s t o p _ o f f :   l i g h t _ b o _ o f f  
 	 	 	 {  
 	 	 	 	 d i s p l a y N a m e   =   " S t o p   L i g h t   o f f " ;  
 	 	 	 	 c o n d i t i o n   =   " ( p l a y e r   = =   d r i v e r   t h i s )   & &   t h i s   a n i m a t i o n P h a s e   ' l i g h t _ s t o p ' < 0 . 5 " ;  
 	 	 	 	 s t a t e m e n t   =   " t h i s   a n i m a t e   [ ' l i g h t _ s t o p ' ,   1 ] " ;  
 	 	 	 } ;  
 	 	 	 c l a s s   l i g h t _ s t o p _ o n :   l i g h t _ b o _ o f f  
 	 	 	 {  
 	 	 	 	 d i s p l a y N a m e   =   " S t o p   L i g h t   o n " ;  
 	 	 	 	 c o n d i t i o n   =   " ( p l a y e r   = =   d r i v e r   t h i s )   & &   t h i s   a n i m a t i o n P h a s e   ' l i g h t _ s t o p ' = = 1 " ;  
 	 	 	 	 s t a t e m e n t   =   " t h i s   a n i m a t e   [ ' l i g h t _ s t o p ' ,   0 ] " ;  
 	 	 	 } ;  
 	 	 } ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ 2 d r :   r h s u s f _ m 9 9 8 _ w _ 2 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 	 a u t h o r   =   " $ S T R _ R H S U S F _ A U T H O R _ F U L L " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ s _ 2 d r :   r h s u s f _ m 9 9 8 _ w _ 2 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 1 2 3   ( 2 D / O p e n ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ s _ 2 d r :   r h s u s f _ m 9 9 8 _ w _ s _ 2 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ 2 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ 2 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 9 7 A 2   ( 2 D / H a l f ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ 2 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ 2 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ s _ 2 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ 2 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 1 2 3   ( 2 D / H a l f ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ s _ 2 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ s _ 2 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ 2 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ w _ 2 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 9 7 A 2   ( 2 D ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ 2 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ w _ 2 d r _ f u l l t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ s _ 2 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ w _ 2 d r _ f u l l t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 1 2 3   ( 2 D ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ s _ 2 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ w _ s _ 2 d r _ f u l l t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ 4 d r :   r h s u s f _ m 9 9 8 _ w _ 2 d r  
 	 {  
 	 	 d i s p l a y n a m e   =   " M 1 0 9 7 A 2   ( 4 D / O p e n ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ 4 d r :   r h s u s f _ m 9 9 8 _ w _ 4 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ s _ 4 d r :   r h s u s f _ m 9 9 8 _ w _ 4 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 1 2 3   ( 4 D / O p e n ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ s _ 4 d r :   r h s u s f _ m 9 9 8 _ w _ s _ 4 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ 4 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ 4 d r  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 9 7 A 2   ( 4 D / H a l f ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ 4 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ 4 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ s _ 4 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ 4 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 1 2 3   ( 4 D / H a l f ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ s _ 4 d r _ h a l f t o p :   r h s u s f _ m 9 9 8 _ w _ s _ 4 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ 4 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ w _ 4 d r _ h a l f t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 9 7 A 2   ( 4 D ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ 4 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ w _ 4 d r _ f u l l t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ w _ s _ 4 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ d _ 4 d r _ f u l l t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 1 2 3   ( 4 D ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 9 9 8 _ d _ s _ 4 d r _ f u l l t o p :   r h s u s f _ m 9 9 8 _ w _ s _ 4 d r _ f u l l t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ w :   r h s u s f _ m 9 9 8 _ w _ 4 d r _ f u l l t o p  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 c l a s s   U s e r A c t i o n s :   U s e r A c t i o n s  
 	 	 {  
 	 	 	 c l a s s   t r u n k _ o p e n  
 	 	 	 {  
 	 	 	 	 d i s p l a y N a m e   =   " O p e n   T r u n k " ;  
 	 	 	 	 p o s i t i o n   =   " t r u n k _ a c t i o n " ;  
 	 	 	 	 r a d i u s   =   2 ;  
 	 	 	 	 o n l y F o r p l a y e r   =   0 ;  
 	 	 	 	 c o n d i t i o n   =   " t h i s   a n i m a t i o n P h a s e   ' a n i _ t r u n k _ 1 ' < 0 . 5 " ;  
 	 	 	 	 s t a t e m e n t   =   " t h i s   a n i m a t e   [ ' a n i _ t r u n k _ 1 ' ,   1 ] ; " ;  
 	 	 	 } ;  
 	 	 	 c l a s s   t r u n k _ c l o s e :   t r u n k _ o p e n  
 	 	 	 {  
 	 	 	 	 d i s p l a y N a m e   =   " C l o s e   T r u n k " ;  
 	 	 	 	 c o n d i t i o n   =   " t h i s   a n i m a t i o n P h a s e   ' a n i _ t r u n k _ 1 ' = = 1 " ;  
 	 	 	 	 s t a t e m e n t   =   " t h i s   a n i m a t e   [ ' a n i _ t r u n k _ 1 ' ,   0 ] " ;  
 	 	 	 } ;  
 	 	 	 c l a s s   w i n d o w _ a c t i o n  
 	 	 	 {  
 	 	 	 	 d i s p l a y N a m e   =   " R a i s e / L o w e r   w i n d o w " ;  
 	 	 	 	 p o s i t i o n   =   " p o s _ d r i v e r p o s " ;  
 	 	 	 	 r a d i u s   =   1 4 ;  
 	 	 	 	 o n l y F o r p l a y e r   =   0 ;  
 	 	 	 	 c o n d i t i o n   =   " ( ( c a l l   r h s u s f _ f n c _ f i n d P l a y e r )   i n   t h i s )   A N D   ( ( g u n n e r   t h i s )   ! =   ( c a l l   r h s u s f _ f n c _ f i n d P l a y e r )   ) " ;  
 	 	 	 	 s t a t e m e n t   =   " t h i s   c a l l   r h s _ f n c _ m 1 0 2 5 _ w i n d o w H a n d l e r " ;  
 	 	 	 } ;  
 	 	 } ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ d :   r h s u s f _ m 1 0 2 5 _ w  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ w _ s :   r h s u s f _ m 1 0 2 5 _ w  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 2 5 A 2   ( U n a r m e d / S n o r k e l ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ d _ s :   r h s u s f _ m 1 0 2 5 _ w _ s  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ w _ m 2 :   r h s u s f _ m 1 0 2 5 _ w  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 2 5 A 2   ( M 2 ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ d _ m 2 :   r h s u s f _ m 1 0 2 5 _ w _ m 2  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ w _ s _ m 2 :   r h s u s f _ m 1 0 2 5 _ w _ m 2  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 2 5 A 2   ( M 2 / S n o r k e l ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ d _ s _ m 2 :   r h s u s f _ m 1 0 2 5 _ w _ s _ m 2  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ w _ m k 1 9 :   r h s u s f _ m 1 0 2 5 _ w _ m 2  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ u c p _ r i f l e m a n " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 2 5 A 2   ( M k 1 9 ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ d _ M k 1 9 :   r h s u s f _ m 1 0 2 5 _ w _ M k 1 9  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ a r m y _ o c p _ r i f l e m a n " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ w _ s _ M k 1 9 :   r h s u s f _ m 1 0 2 5 _ w _ M k 1 9  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ w d _ r i f l e m a n _ m 4 " ;  
 	 	 d i s p l a y n a m e   =   " M 1 0 2 5 A 2   ( M k 1 9 / S n o r k e l ) " ;  
 	 } ;  
 	 c l a s s   r h s u s f _ m 1 0 2 5 _ d _ s _ M k 1 9 :   r h s u s f _ m 1 0 2 5 _ w _ s _ M k 1 9  
 	 {  
 	 	 f a c t i o n   =   " F a c t i o n _ U S A M " ;  
 	 	 v e h i c l e C l a s s   =   " p o j a z d y l a d o w e 2 " ;  
 	 	 c r e w   =   " r h s u s f _ u s m c _ m a r p a t _ d _ r i f l e m a n _ m 4 " ;  
 	 } ;  
 } ; 