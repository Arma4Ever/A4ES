c l a s s   C f g P a t c h e s  
 {  
 	 c l a s s   a 3 c _ c _ r h s u s f _ c _ w e a p o n s  
 	 {  
 	 	 u n i t s [ ]   =   { } ;  
 	 	 w e a p o n s [ ]   =   { } ;  
 	 	 r e q u i r e d V e r s i o n   =   1 . 3 2 ;  
 	 	 r e q u i r e d A d d o n s [ ]   =   { " r h s u s f _ c _ w e a p o n s " } ;  
 	 	 a u t h o r   =   " S z w e d z i k P L " ;  
 	 } ;  
 } ;  
 c l a s s   R s c C o n t r o l s G r o u p ;  
 c l a s s   R s c I n G a m e U I  
 {  
 	 c l a s s   R s c U n i t I n f o ;  
 	 c l a s s   R H S _ F l a s h l i g h t  
 	 {  
 	 	 i d d   =   3 0 0 5 ;  
 	 	 o n L o a d   =   " [ ' o n L o a d ' , _ t h i s , ' R s c U n i t I n f o ' , ' I G U I ' ]   c a l l   ( u i n a m e s p a c e   g e t v a r i a b l e   ' B I S _ f n c _ i n i t D i s p l a y ' ) ; " ;  
 	 } ;  
 	 c l a s s   R s c W e a p o n Z e r o i n g ;  
 	 c l a s s   r h s _ r s c O p t i c s _ a t 4 :   R s c W e a p o n Z e r o i n g  
 	 {  
 	 	 o n L o a d   =   " [ ' o n L o a d ' , _ t h i s , ' R s c U n i t I n f o ' , ' I G U I ' ]   c a l l   ( u i n a m e s p a c e   g e t v a r i a b l e   ' B I S _ f n c _ i n i t D i s p l a y ' ) " ;  
 	 } ;  
 	 c l a s s   r h s _ a c o g _ p i p _ h a n d l e r :   R s c W e a p o n Z e r o i n g  
 	 {  
 	 	 o n L o a d   =   " [ ' o n L o a d ' , _ t h i s , ' R s c U n i t I n f o ' , ' I G U I ' ]   c a l l   ( u i n a m e s p a c e   g e t v a r i a b l e   ' B I S _ f n c _ i n i t D i s p l a y ' ) ;   [ _ t h i s   s e l e c t   0 , 4 , ' a c o g ' ]     c a l l   R H S _ f n c _ p i p _ h a n d l e r " ;  
 	 } ;  
 	 c l a s s   r h s _ e l c a n _ p i p _ h a n d l e r :   R s c W e a p o n Z e r o i n g  
 	 {  
 	 	 o n L o a d   =   " [ ' o n L o a d ' , _ t h i s , ' R s c U n i t I n f o ' , ' I G U I ' ]   c a l l   ( u i n a m e s p a c e   g e t v a r i a b l e   ' B I S _ f n c _ i n i t D i s p l a y ' ) ;   [ _ t h i s   s e l e c t   0 , 3 . 4 , ' e l c a n ' ]   c a l l   R H S _ f n c _ p i p _ h a n d l e r " ;  
 	 } ;  
 	 c l a s s   r h s _ m 2 0 1 0 _ h a n d l e r :   R s c W e a p o n Z e r o i n g  
 	 {  
 	 	 o n L o a d   =   " [ ' o n L o a d ' , _ t h i s , ' R s c U n i t I n f o ' , ' I G U I ' ]   c a l l   ( u i n a m e s p a c e   g e t v a r i a b l e   ' B I S _ f n c _ i n i t D i s p l a y ' ) ; " ;  
 	 } ;  
 	 c l a s s   r h s _ g u i _ o p t i c _ r a n g e m a s t e r 1 2 0 0 _ r a n g e f i n d e r :   R s c U n i t I n f o  
 	 {  
 	 	 i d d   =   3 0 0 ;  
 	 	 o n L o a d   =   " [ ' o n L o a d ' , _ t h i s , ' R s c U n i t I n f o ' , ' I G U I ' ]   c a l l   ( u i n a m e s p a c e   g e t v a r i a b l e   ' B I S _ f n c _ i n i t D i s p l a y ' ) ; " ;  
 	 	 c l a s s   C A _ I G U I _ e l e m e n t s _ g r o u p :   R s c C o n t r o l s G r o u p   { } ;  
 	 } ;  
 } ;  
 c l a s s   C f g W e a p o n s  
 {  
 	 c l a s s   r h s u s f _ a c c _ s n i p e r _ b a s e ;  
 	 c l a s s   r h s u s f _ a c c _ A C O G :   r h s u s f _ a c c _ s n i p e r _ b a s e  
 	 {  
 	 	 s c o p e   =   2 ;  
 	 } ;  
 	 c l a s s   r h s u s f _ a c c _ A C O G _ p i p :   r h s u s f _ a c c _ A C O G  
 	 {  
  
 	 } ;  
 	 c l a s s   r h s u s f _ a c c _ E L C A N :   r h s u s f _ a c c _ s n i p e r _ b a s e  
 	 {  
 	 	 s c o p e   =   2 ;  
 	 } ;  
 	 c l a s s   r h s u s f _ a c c _ E L C A N _ p i p :   r h s u s f _ a c c _ E L C A N  
 	 {  
  
 	 } ;  
  
 	 c l a s s   R i f l e _ B a s e _ F ;  
 	 c l a s s   r h s _ w e a p _ X M 2 0 1 0 _ B a s e _ F :   R i f l e _ B a s e _ F  
 	 {  
 	 	 s c o p e   =   0 ;  
 	 } ;  
 	 c l a s s   r h s _ w e a p _ X M 2 0 1 0 :   r h s _ w e a p _ X M 2 0 1 0 _ B a s e _ F  
 	 {  
 	 	 s c o p e   =   2 ;  
                 c l a s s   b g _ w e a p o n p a r a m e t e r s    
                 {  
  
                         c l a s s   o n F i r e d _ A c t i o n  
                         {  
                                 H a n d A c t i o n   =   " H L C _ G e s t u r e R e l o a d B o l t S M L E " ;  
                                 A c t i o n d e l a y   =   0 ;  
                                 S o u n d   =   " s n i p e r _ b o l t _ s o u n d " ;  
                                 S o u n d _ L o c a t i o n   =   " R i g h t H a n d M i d d l e 1 " ;  
                                 h a s O p t i c   =   0 ;  
                         } ;  
                 } ; 	 	 	  
 	 } ;  
 	 c l a s s   r h s _ w e a p _ X M 2 0 1 0 _ d :   r h s _ w e a p _ X M 2 0 1 0  
 	 {  
                 c l a s s   b g _ w e a p o n p a r a m e t e r s    
                 {  
  
                         c l a s s   o n F i r e d _ A c t i o n  
                         {  
                                 H a n d A c t i o n   =   " H L C _ G e s t u r e R e l o a d B o l t S M L E " ;  
                                 A c t i o n d e l a y   =   0 ;  
                                 S o u n d   =   " s n i p e r _ b o l t _ s o u n d " ;  
                                 S o u n d _ L o c a t i o n   =   " R i g h t H a n d M i d d l e 1 " ;  
                                 h a s O p t i c   =   0 ;  
                         } ;  
                 } ; 	  
 	 } ;  
 	 c l a s s   r h s _ w e a p _ X M 2 0 1 0 _ w d :   r h s _ w e a p _ X M 2 0 1 0  
 	 {  
                 c l a s s   b g _ w e a p o n p a r a m e t e r s    
                 {  
  
                         c l a s s   o n F i r e d _ A c t i o n  
                         {  
                                 H a n d A c t i o n   =   " H L C _ G e s t u r e R e l o a d B o l t S M L E " ;  
                                 A c t i o n d e l a y   =   0 ;  
                                 S o u n d   =   " s n i p e r _ b o l t _ s o u n d " ;  
                                 S o u n d _ L o c a t i o n   =   " R i g h t H a n d M i d d l e 1 " ;  
                                 h a s O p t i c   =   0 ;  
                         } ;  
                 } ; 	  
 	 } ;  
 	 c l a s s   r h s _ w e a p _ X M 2 0 1 0 _ s a :   r h s _ w e a p _ X M 2 0 1 0  
 	 {  
                 c l a s s   b g _ w e a p o n p a r a m e t e r s    
                 {  
  
                         c l a s s   o n F i r e d _ A c t i o n  
                         {  
                                 H a n d A c t i o n   =   " H L C _ G e s t u r e R e l o a d B o l t S M L E " ;  
                                 A c t i o n d e l a y   =   0 ;  
                                 S o u n d   =   " s n i p e r _ b o l t _ s o u n d " ;  
                                 S o u n d _ L o c a t i o n   =   " R i g h t H a n d M i d d l e 1 " ;  
                                 h a s O p t i c   =   0 ;  
                         } ;  
                 } ; 	  
 	 } ;  
 } ; 