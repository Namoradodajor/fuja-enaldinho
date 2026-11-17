use std::io;

fn main() {
    let (mut energia, mut alerta) = (28, 0);
    println!("FUGA DO ENALDINHO [28/16] - Digite 1 (Furtivo) ou 2 (Correr):");

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    if input.trim() == "1" {
        energia -= 3;
    } else {
        energia -= 1;
        alerta += 3;
    }

    println!("Resultado -> Energia: {}/28 | Alerta: {}/16", energia, alerta);
    if energia > 0 && alerta < 16 {
        println!("Voce fugiu da Mansao Elo!");
    } else {
        println!("Fala galera, achamos ele!");
    }
}