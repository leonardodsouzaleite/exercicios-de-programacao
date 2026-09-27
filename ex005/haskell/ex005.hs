main :: IO ()
main = do
    linha1 <- getLine
    let t1 = read linha1 :: Int
    
    linha2 <- getLine
    let t2 = read linha2 :: Int
    
    putStrLn ("SOMA = " ++ show (t1 + t2))
