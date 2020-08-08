 function getResult(){
    let result   = 0;
    let interest = 0;
    capital      = parseFloat(document.querySelector('#capital').value);
    tasa         = parseFloat(document.querySelector('#tasa').value);
    plazo        = parseFloat(document.querySelector('#plazo').value);
    result       = wasmExports.valor_cuota(tasa, capital, plazo);
    interest     = wasmExports.valor_interes(capital, tasa, plazo);
    document.getElementById("cuota-mensual").value = Math.round(result);
    document.getElementById("valor-interes").value = Math.round(interest);
    let list = '<tr><th>#</th><th>Valor Cuota</th><tr>';
    for(var i=0; i < parseInt(plazo); i++){
        list += "<tr>";
        list +=  "<td>" + i + "</td>";
        list +=  "<td>" + Math.round(result) + "</td>";
        list += "</tr>";
    }
    document.getElementById("valor-cuota").innerHTML = list;
}

