$('.owl-carousel').owlCarousel({/*$ é o jquery */
    loop:true,/*faz o carrosel rodar em loop*/
    margin:20,/*Entre um item e outro*/
    nav:true,/*pequenos botoes de navegação */
    autoplay:true,/*Para o carrosel rodar sozinho */
    autoplayTimeout:1000,/*tempo da mudança */
    autoplayHoverPause:true,/*Parar quando chegar o mouse em cima */
    responsive:{
        0:{
            items:1
        },
        600:{
            items:3
        },
        1000:{
            items:5
        }
    }
})