import Text.Printf (printf)

calcularMedia :: Double -> Double -> Double
calcularMedia a b = (a * 3.5 + b * 7.5) / 11.0

main :: IO ()
main = do
  a <- readLn :: IO Double
  b <- readLn :: IO Double
  let media = calcularMedia a b
  printf "MEDIA = %.5f\n" media
