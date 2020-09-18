function getResult(){
    let result   = 0;
    var interest = 0;
    var capital      = parseFloat(document.querySelector('#capital').value);
    var tasa         = parseFloat(document.querySelector('#tasa').value);
    var plazo        = parseFloat(document.querySelector('#plazo').value);
    result       = wasmExports.valor_cuota(capital, tasa, plazo);
    console.log("result", result);
    interest     = wasmExports.valor_interes(capital, tasa, plazo);
    document.getElementById("cuota-mensual").value = Math.round(result);
    document.getElementById("valor-interes").value = Math.round(interest);
    let list = '<tr><th>#</th><th>Valor Cuota</th><th>Intereses</th><th>Amortización</th><th>Saldo final</th><tr>';
    for(var i=0; i < parseInt(plazo); i++){
	let newInteres = wasmExports.valor_interes(capital, tasa, plazo);
	let amortization = Math.round(result) - Math.round(newInteres);
	capital  = Math.round(capital - amortization);
        list += "<tr>";
        list +=  "<td>" + i + "</td>";
        list +=  "<td>" + Math.round(result) + "</td>";
	list +=  "<td>" + Math.round(newInteres) + "</td>";
	list +=  "<td>" + Math.round(amortization) + "</td>";
	list +=  "<td>" + Math.round(capital) + "</td>";
        list += "</tr>";
    }
    document.getElementById("valor-cuota").innerHTML = list;
}

