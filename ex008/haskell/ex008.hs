main :: IO ()
main = do
  t1Str <- getLine
  t2Str <- getLine
  let t1 = read t1Str :: Double
  let t2 = read t2Str :: Double
  let resultado = (t1 + t2) / 2
  putStrLn (show resultado)
