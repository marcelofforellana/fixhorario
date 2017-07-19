function setHorarios (horario, sigla, numeroSeccion) {
    var bloques = horario.split("-");
    jQuery.each(bloques, function (index, value) {
        var horario = value.replace(/[A-B]/, "");
        var tdHorario = jQuery("#TD_" + horario);
        var tdHorarioSeccion = tdHorario.children().attr("class");

        if (typeof tdHorarioSeccion != "undefined") {
            var seccion = tdHorarioSeccion.split(" ");
            jQuery("#mensaje").html("Existe tope de horario con la seccion : " + seccion[2].replace("A_", "") + " la cual será quitada.")
            jQuery("#divTopeHorario").show().fadeIn(1000).delay(4000).hide(600);
            // jQuery("." + seccion[2]).remove();
        }
        tdHorario.append("<span class='label label-success A_" + sigla + "' style='font-size:10px; padding:5px 5px 5px 5px;'> " + sigla + " (" + numeroSeccion + ") </span>");
    });
}